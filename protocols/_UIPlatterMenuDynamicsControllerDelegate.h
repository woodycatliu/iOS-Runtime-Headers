/* Generated by RuntimeBrowser.
 */

@protocol _UIPlatterMenuDynamicsControllerDelegate <NSObject>

@required

- (struct CGPoint { float x1; float x2; })centerForMenuDismissed;
- (struct CGPoint { float x1; float x2; })centerForMenuPresented;
- (struct CGPoint { float x1; float x2; })centerForPlatterWithMenuViewDismissed;
- (struct CGPoint { float x1; float x2; })centerForPlatterWithMenuViewPresented;
- (struct CGPoint { float x1; float x2; })initialCenterForLeadingSwipeActionView;
- (struct CGPoint { float x1; float x2; })initialCenterForTrailingSwipeActionView;
- (UIView *)leadingSwipeActionView;
- (float)minimumSpacingBetweenPlatterAndMenu;
- (void)platterMenuDynamicsController:(_UIPlatterMenuDynamicsController *)arg1 didMoveSwipeView:(UIView *)arg2 toPosition:(struct CGPoint { float x1; float x2; })arg3;
- (void)platterMenuDynamicsControllerDidDismissWithController:(_UIPlatterMenuDynamicsController *)arg1;
- (UIView *)trailingSwipeActionView;

@optional

- (void)translationDidUpdateForPlatterMenuDynamicsController:(_UIPlatterMenuDynamicsController *)arg1;

@end