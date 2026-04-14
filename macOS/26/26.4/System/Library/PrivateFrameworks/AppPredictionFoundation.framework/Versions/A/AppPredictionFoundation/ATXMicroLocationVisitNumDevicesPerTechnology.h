@class NSString, NSNumber;

@interface ATXMicroLocationVisitNumDevicesPerTechnology : NSObject

@property (readonly, nonatomic) NSString *technology;
@property (readonly, nonatomic) NSNumber *numDevices;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTechnology:(id)a0 numDevices:(id)a1;
- (BOOL)isEqualToATXMicroLocationVisitNumDevicesPerTechnology:(id)a0;

@end
