@class NSDate;

@interface PCSCurrentIdentity : NSObject

@property (retain) NSDate *currentItemPointerModificationTime;
@property (readonly) struct _PCSIdentityData { } *identity;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentity:(struct _PCSIdentityData { } *)a0 currentItemPointerModificationTime:(id)a1;

@end
