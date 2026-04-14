@class NSString;

@interface PHPublicEventInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *eventID;
@property (readonly, nonatomic) NSString *eventTitle;
@property (readonly, nonatomic) int eventCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithEventID:(id)a0 eventTitle:(id)a1 eventCategory:(int)a2;

@end
