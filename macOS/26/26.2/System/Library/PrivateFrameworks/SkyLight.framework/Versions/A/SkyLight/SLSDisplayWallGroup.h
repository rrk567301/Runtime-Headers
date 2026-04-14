@class NSNumber, NSArray;

@interface SLSDisplayWallGroup : NSObject

@property (readonly, nonatomic) NSNumber *groupID;
@property (readonly, nonatomic) NSArray *displayIDs;

- (id)init;
- (void)dealloc;
- (id)initWithCGDisplayWallGroup:(struct { unsigned int x0; unsigned int x1[8]; unsigned int x2; })a0;

@end
