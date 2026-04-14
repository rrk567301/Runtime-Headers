@class NSData;

@interface IMNicknameEncryptionKey : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly) const void *bytes;
@property (readonly, nonatomic) unsigned long long length;

- (void)dealloc;
- (id)initWithData:(id)a0;

@end
