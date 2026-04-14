@class NSData;

@interface CKDTrustedTargetKey : NSObject

@property (retain, nonatomic) NSData *key;

- (id)init;
- (void).cxx_destruct;
- (id)encrypt:(id)a0;
- (id)decrypt:(id)a0;

@end
