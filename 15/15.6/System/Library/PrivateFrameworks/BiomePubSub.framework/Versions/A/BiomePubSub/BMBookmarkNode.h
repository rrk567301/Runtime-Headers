@class NSArray, NSString;
@protocol BMBookmark;

@interface BMBookmarkNode : NSObject <BMBookmark, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *upstreams;
@property (retain, nonatomic) id<BMBookmark> value;
@property (retain, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionAtLevel:(long long)a0;
- (id)initWithValue:(id)a0 upstreams:(id)a1 name:(id)a2;

@end
