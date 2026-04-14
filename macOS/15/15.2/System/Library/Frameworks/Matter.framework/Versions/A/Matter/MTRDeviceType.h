@class NSNumber, NSString;

@interface MTRDeviceType : NSObject

@property (readonly, copy, nonatomic) NSNumber *id;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isUtility;

+ (id)deviceTypeForID:(id)a0;

- (void).cxx_destruct;
- (id)initWithDeviceTypeID:(id)a0 name:(id)a1 isUtility:(BOOL)a2;

@end
