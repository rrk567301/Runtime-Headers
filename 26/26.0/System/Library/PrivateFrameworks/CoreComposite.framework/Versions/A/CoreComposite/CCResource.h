@class CCDataDescriptor, CCData;
@protocol CCResourceDelegate;

@interface CCResource : NSObject

@property (readonly, nonatomic) CCData *lastObject;
@property (readonly, nonatomic) CCData *nextObject;
@property (readonly, nonatomic) BOOL hasAttachedData;
@property (weak, nonatomic) id<CCResourceDelegate> delegate;
@property (retain, nonatomic) CCDataDescriptor *dataDescriptor;
@property (retain, nonatomic) Class dataType;

- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)reallocateResourcesWithDeviceGroup:(id)a0;

@end
