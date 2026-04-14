@class NBObjCURLHasher;

@interface NBURLHasher : NSObject

@property (readonly, nonatomic) NBObjCURLHasher *hasher;

- (void).cxx_destruct;
- (id)init;
- (id)hashForURL:(id)a0 maxLength:(unsigned long long)a1;

@end
