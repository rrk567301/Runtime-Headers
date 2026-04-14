@class NSString;

@interface URMTLStructMemberInternal : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long aluType;
@property (nonatomic) unsigned long long render_target;
@property (nonatomic) unsigned long long raster_order_group;
@property (nonatomic) unsigned long long argumentIndex;

- (BOOL)supportsSecureCoding;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
