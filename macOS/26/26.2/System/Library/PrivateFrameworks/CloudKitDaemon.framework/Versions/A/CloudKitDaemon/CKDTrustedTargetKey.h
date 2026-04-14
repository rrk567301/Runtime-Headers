@class NSData;

@interface CKDTrustedTargetKey : NSObject

@property (readonly, nonatomic) NSData *key;

- (void).cxx_destruct;
- (id)init;
- (id)decrypt:(id)a0;
- (id)encrypt:(id)a0;

@end
