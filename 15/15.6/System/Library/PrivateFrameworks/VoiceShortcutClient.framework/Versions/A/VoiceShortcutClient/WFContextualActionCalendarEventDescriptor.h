@class NSString;

@interface WFContextualActionCalendarEventDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *eventIdentifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *title;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEventIdentifier:(id)a0 uniqueIdentifier:(id)a1 title:(id)a2;

@end
