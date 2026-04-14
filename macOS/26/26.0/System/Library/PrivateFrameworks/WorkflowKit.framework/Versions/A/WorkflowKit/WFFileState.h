@class NSString, NSDate;

@interface WFFileState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSString *path;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 lastModifiedDate:(id)a1 path:(id)a2;

@end
