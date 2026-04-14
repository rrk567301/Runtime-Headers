@class NSURL, NSString;

@interface CalAttendee : NSObject <NSCopying> {
    id _objectID;
    void *_reserved;
}

@property (readonly) NSURL *address;
@property (readonly) NSString *commonName;
@property (readonly) NSString *status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAddress:(id)a0 commonName:(id)a1 status:(id)a2;

@end
