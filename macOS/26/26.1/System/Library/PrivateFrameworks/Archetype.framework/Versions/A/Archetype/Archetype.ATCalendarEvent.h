@class NSString;

@interface Archetype.ATCalendarEvent : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ eventTitle;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithEventTitle:(id)a0;

@end
