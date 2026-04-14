@class NSString, NSNumber;

@interface ATXMicroLocationVisitNumDevicesPerTechnology : NSObject

@property (readonly, nonatomic) NSString *technology;
@property (readonly, nonatomic) NSNumber *numDevices;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithTechnology:(id)a0 numDevices:(id)a1;
- (BOOL)isEqualToATXMicroLocationVisitNumDevicesPerTechnology:(id)a0;

@end
