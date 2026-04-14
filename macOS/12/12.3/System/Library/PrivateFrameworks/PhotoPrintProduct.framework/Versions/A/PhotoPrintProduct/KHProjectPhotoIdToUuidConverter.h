@class NSDictionary;

@interface KHProjectPhotoIdToUuidConverter : NSObject

@property (retain, nonatomic) NSDictionary *photoIdToUuidMap;
@property (nonatomic) BOOL deepCopy;

- (void)dealloc;
- (id)returnMutableDictionary:(id)a0;
- (void)processDictionary:(id)a0;
- (id)returnMutableArray:(id)a0;
- (void)processArray:(id)a0;
- (id)returnMutableSet:(id)a0;
- (void)processSet:(id)a0;
- (void)processImageElement:(id)a0;
- (id)initWithPhotoIdToUuidMap:(id)a0 deepCopy:(BOOL)a1;
- (id)convertProjectData:(id)a0;

@end
