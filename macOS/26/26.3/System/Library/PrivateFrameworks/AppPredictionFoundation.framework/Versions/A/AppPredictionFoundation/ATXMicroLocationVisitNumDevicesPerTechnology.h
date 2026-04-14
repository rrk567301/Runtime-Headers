@class NSString, NSNumber;

@interface ATXMicroLocationVisitNumDevicesPerTechnology : NSObject

@property (readonly, nonatomic) NSString *technology;
@property (readonly, nonatomic) NSNumber *numDevices;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTechnology:(id)a0 numDevices:(id)a1;
- (BOOL)isEqualToATXMicroLocationVisitNumDevicesPerTechnology:(id)a0;

@end
