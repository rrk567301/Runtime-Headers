@class NSDictionary;

@interface CCServiceLibrary : NSObject

@property (class, readonly, nonatomic) NSDictionary *descriptorMapping;

+ (id)generateServicesWithDescriptor:(id)a0;

@end
