@class NSData;

@interface PXStoryMiroAssetInfo : NSObject

@property (nonatomic) char isUsed;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)infoForUsedPhoto;
+ (id)infoWithData:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
