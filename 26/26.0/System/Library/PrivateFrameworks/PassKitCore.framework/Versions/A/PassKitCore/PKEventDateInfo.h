@class NSTimeZone, NSDate;

@interface PKEventDateInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) BOOL ignoreTimeComponents;
@property (readonly, nonatomic, getter=isUnannounced) BOOL unannounced;
@property (readonly, nonatomic, getter=isUndetermined) BOOL undetermined;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
