@class NSString, NSURL, NSArray;

@interface PPAttendee : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_backingPlists;
    unsigned long long _indexInBackingPlists;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) char isCurrentUser;
@property (readonly, nonatomic) unsigned char status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEKParticipant:(id)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 url:(id)a2 isCurrentUser:(char)a3 status:(unsigned char)a4;
- (id)initWithName:(id)a0 emailAddress:(id)a1 urlString:(id)a2 isCurrentUser:(char)a3 status:(unsigned char)a4;

@end
