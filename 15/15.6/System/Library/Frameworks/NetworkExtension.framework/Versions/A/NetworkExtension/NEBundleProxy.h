@class NSString, NSURL, NSArray;

@interface NEBundleProxy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, retain, nonatomic) NSArray *machOUUIDs;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSArray *appGroups;
@property (nonatomic) char isWatchKitApp;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 url:(id)a1 machOUUIDs:(id)a2 name:(id)a3 appGroups:(id)a4;

@end
