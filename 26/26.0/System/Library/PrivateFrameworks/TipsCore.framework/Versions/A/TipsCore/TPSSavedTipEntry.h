@class NSString, NSDate;

@interface TPSSavedTipEntry : NSObject <NSSecureCoding> {
    void /* function */ tipIdentifier;
    void /* unknown type, empty encoding */ savedDate;
    void /* function */ lastUsedVersion;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *tipIdentifier;
@property (nonatomic, copy) NSDate *savedDate;
@property (nonatomic, copy) NSString *lastUsedVersion;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTipIdentifier:(id)a0 savedDate:(id)a1 lastUsedVersion:(id)a2;

@end
