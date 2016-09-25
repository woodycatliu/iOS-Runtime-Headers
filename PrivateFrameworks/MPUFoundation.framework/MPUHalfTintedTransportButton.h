/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUHalfTintedTransportButton : UIControl <MPUTransportButton, MPUVibrantContentDisabling> {
    UIButton * _regularButton;
    UIImage * _regularImage;
    UIColor * _regularImageColor;
    UIButton * _tintedButton;
    UIImage * _tintedImage;
    MPUTransportButtonEventHandler * _transportButtonEventHandler;
}

@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_regularButton, nonatomic, readonly) UIButton *regularButton;
@property (nonatomic, retain) UIImage *regularImage;
@property (nonatomic) float regularImageAlpha;
@property (nonatomic, retain) UIColor *regularImageColor;
@property (nonatomic, readonly) UIImageView *regularImageView;
@property (readonly) Class superclass;
@property (getter=_tintedButton, nonatomic, readonly) UIButton *tintedButton;
@property (nonatomic, retain) UIImage *tintedImage;
@property (nonatomic) float tintedImageAlpha;
@property (nonatomic, retain) UIColor *tintedImageColor;
@property (nonatomic, readonly) UIImageView *tintedImageView;
@property (nonatomic, readonly) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) int transportButtonImageViewContentMode;

+ (id)transportButton;

- (void).cxx_destruct;
- (void)_applyImage:(id)arg1 toButton:(id)arg2;
- (id)_newButton;
- (id)_regularButton;
- (BOOL)_shouldForwardSelectedState;
- (id)_tintedButton;
- (void)_updateRegularImage;
- (BOOL)adjustsImageWhenHighlighted;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (id)layersNotWantingVibrancy;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)regularImage;
- (float)regularImageAlpha;
- (id)regularImageColor;
- (id)regularImageView;
- (void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setRegularImage:(id)arg1;
- (void)setRegularImageAlpha:(float)arg1;
- (void)setRegularImageColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTintedImage:(id)arg1;
- (void)setTintedImageAlpha:(float)arg1;
- (void)setTintedImageColor:(id)arg1;
- (void)setTransportButtonImageViewContentMode:(int)arg1;
- (BOOL)shouldTrack;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tintedImage;
- (float)tintedImageAlpha;
- (id)tintedImageColor;
- (id)tintedImageView;
- (id)transportButtonEventHandler;
- (int)transportButtonImageViewContentMode;
- (BOOL)wantsCustomHighlightAppearance;

@end