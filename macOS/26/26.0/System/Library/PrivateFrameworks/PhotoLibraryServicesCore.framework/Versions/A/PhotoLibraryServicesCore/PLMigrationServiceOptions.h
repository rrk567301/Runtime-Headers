@class NSString;

@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *clientBundleId;
@property (copy) NSString *suggestedDestinationName;
@property unsigned short option;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPMSOption:(unsigned short)a0;
- (id)nameForOption:(unsigned short)a0;

@end
