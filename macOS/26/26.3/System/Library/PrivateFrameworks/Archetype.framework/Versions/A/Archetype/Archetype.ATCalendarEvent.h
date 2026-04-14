@class NSString;

@interface Archetype.ATCalendarEvent : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ eventTitle;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEventTitle:(id)a0;

@end
