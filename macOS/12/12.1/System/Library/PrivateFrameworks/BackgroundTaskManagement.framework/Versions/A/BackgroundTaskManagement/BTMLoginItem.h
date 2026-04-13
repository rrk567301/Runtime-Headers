@class NSData, NSUUID, NSString;

@interface BTMLoginItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long type;
@property (retain) NSData *installerBookmark;
@property (readonly) NSUUID *identifier;
@property (readonly) NSData *bookmark;
@property (readonly) NSString *name;
@property BOOL hidden;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithBookmark:(id)a0 hidden:(BOOL)a1;
- (BOOL)isIdenticalToLoginItem:(id)a0;
- (void)getURLByResolvingBookmarkCompletion:(id /* block */)a0;
- (id)initWithURL:(id)a0 hidden:(BOOL)a1;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1 bookmark:(id)a2 hidden:(BOOL)a3;
- (BOOL)isEqualToLoginItem:(id)a0;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1 bookmark:(id)a2;

@end
