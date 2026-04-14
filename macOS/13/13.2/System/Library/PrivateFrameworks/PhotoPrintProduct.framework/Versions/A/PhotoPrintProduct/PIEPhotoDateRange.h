@class NSDate;
@protocol KHPhotoInfoProtocol;

@interface PIEPhotoDateRange : NSObject

@property (readonly) id<KHPhotoInfoProtocol> earliestPhoto;
@property (readonly) id<KHPhotoInfoProtocol> latestPhoto;
@property (readonly) NSDate *earliestDate;
@property (readonly) NSDate *latestDate;
@property (readonly) NSDate *averagePhotoDate;
@property (readonly) double timespan;

+ (id)dateRangeFromPhotos:(id)a0;

- (void)dealloc;
- (id)description;
- (id)initWithEarliestPhoto:(id)a0 latestPhoto:(id)a1;
- (id)initWithPhotos:(id)a0;
- (BOOL)emptyRange;
- (void)_calculatePhotoDatesRange:(id)a0;

@end
