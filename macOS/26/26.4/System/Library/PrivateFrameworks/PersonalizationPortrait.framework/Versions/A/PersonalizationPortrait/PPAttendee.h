@class NSString, NSURL, NSArray;

@interface PPAttendee : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_backingPlists;
    unsigned long long _indexInBackingPlists;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, nonatomic) unsigned char status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEKParticipant:(id)a0;
- (id)initWithName:(id)a0 emailAddress:(id)a1 url:(id)a2 isCurrentUser:(BOOL)a3 status:(unsigned char)a4;
- (id)initWithName:(id)a0 emailAddress:(id)a1 urlString:(id)a2 isCurrentUser:(BOOL)a3 status:(unsigned char)a4;

@end
