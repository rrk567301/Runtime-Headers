@class NSData;

@interface PXStoryMiroAssetInfo : NSObject

@property (nonatomic) BOOL isUsed;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)infoWithData:(id)a0;
+ (id)infoForUsedPhoto;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
