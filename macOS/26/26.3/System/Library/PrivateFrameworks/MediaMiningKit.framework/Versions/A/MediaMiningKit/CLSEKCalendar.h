@class NSString, NSSet;

@interface CLSEKCalendar : NSObject <NSCoding>

@property (readonly) NSString *calendarIdentifier;
@property (readonly) BOOL hasSharees;
@property (readonly) NSSet *shareesAndOwner;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEKCalendar:(id)a0;

@end
