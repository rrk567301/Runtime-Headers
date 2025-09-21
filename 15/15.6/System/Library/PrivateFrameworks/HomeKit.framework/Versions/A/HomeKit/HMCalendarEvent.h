@class NSDateComponents;

@interface HMCalendarEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDateComponents *fireDateComponents;

+ (id)createWithDictionary:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_serializeForAdd;
- (void)_updateFromDictionary:(id)a0;
- (id)initWithDict:(id)a0 fireDateComponents:(id)a1;
- (id)initWithFireDateComponents:(id)a0;
- (char)mergeFromNewObject:(id)a0;
- (void)updateFireDateComponents:(id)a0 completionHandler:(id /* block */)a1;

@end
