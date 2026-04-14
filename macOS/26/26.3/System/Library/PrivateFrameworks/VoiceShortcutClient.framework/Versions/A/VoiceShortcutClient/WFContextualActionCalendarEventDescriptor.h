@class NSString;

@interface WFContextualActionCalendarEventDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *eventIdentifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEventIdentifier:(id)a0 uniqueIdentifier:(id)a1 title:(id)a2;

@end
