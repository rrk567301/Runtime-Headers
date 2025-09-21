@interface CNMutableSaveResponse : CNSaveResponse

@property char didAffectMeCard;

+ (char)supportsSecureCoding;

- (void)setContactSnapshot:(id)a0 forIndexPath:(id)a1;
- (void)setContainerSnapshot:(id)a0 forIndexPath:(id)a1;
- (void)setDidAffectMeCard:(char)a0;
- (void)setGroupSnapshot:(id)a0 forIndexPath:(id)a1;

@end
