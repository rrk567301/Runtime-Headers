@interface ICNFMCPlaceholderFileWrapper : NSFileWrapper

- (char)isPlaceholder;
- (char)isRemotelyAccessed;

@end
