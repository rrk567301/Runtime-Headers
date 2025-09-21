@class NSArray;

@interface ICStoreArtworkSizeInfo : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *supportedSizes;
@property (nonatomic) char hasMaxSupportedSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSupportedSize;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
