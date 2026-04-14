@class NSString, NSNumber;

@interface ATXMicroLocationVisitNumDevicesPerTechnology : NSObject

@property (readonly, nonatomic) NSString *technology;
@property (readonly, nonatomic) NSNumber *numDevices;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTechnology:(id)a0 numDevices:(id)a1;
- (BOOL)isEqualToATXMicroLocationVisitNumDevicesPerTechnology:(id)a0;

@end
