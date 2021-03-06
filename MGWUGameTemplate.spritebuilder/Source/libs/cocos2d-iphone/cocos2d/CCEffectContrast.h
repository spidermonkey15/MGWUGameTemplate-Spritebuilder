//
//  CCEffectContrast.h
//  cocos2d-ios
//
//  Created by Thayer J Andrews on 5/7/14.
//
//

#import "CCEffect.h"

/**
 * CCEffectContrast adjusts the contrast of the sprite or effect node
 * it is attached to.
 *
 */

@interface CCEffectContrast : CCEffect

/// -----------------------------------------------------------------------
/// @name Accessing Effect Attributes
/// -----------------------------------------------------------------------

/** The contrast adjustment value that is used to scale the pixel colors of the
 *  affected node. This value is in the range [-1..1], and the napping of this value
 *  to the color scale factor is: pow(4.0, contrast). This means that
 *  an adjustment value of -1 scales the affected color by 0.25, 0 results in no
 *  change, and 1 scales the affected color by 4.
 */
@property (nonatomic, assign) float contrast;


/// -----------------------------------------------------------------------
/// @name Initializing a CCEffectContrast object
/// -----------------------------------------------------------------------

/**
 *  Initializes a CCEffectContrast object with a contrast adjustment of 0.
 *
 *  @return The CCEffectContrast object.
 */
-(id)init;

/**
 *  Initializes a CCEffectContrast object with the supplied parameters.
 *
 *  @param contrast The desired contrast adjustment.
 *
 *  @return The CCEffectContrast object.
 */
-(id)initWithContrast:(float)contrast;


/// -----------------------------------------------------------------------
/// @name Creating a CCEffectContrast object
/// -----------------------------------------------------------------------

/**
 *  Initializes a CCEffectContrast object with the supplied parameters.
 *
 *  @param contrast The desired contrast adjustment.
 *
 *  @return The CCEffectContrast object.
 */
+(id)effectWithContrast:(float)contrast;

@end
