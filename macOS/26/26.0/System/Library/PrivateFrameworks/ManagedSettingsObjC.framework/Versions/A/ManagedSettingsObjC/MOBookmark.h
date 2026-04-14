@class NSString, NSArray;

@interface MOBookmark : NSObject <MOPersistable, NSCopying>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *title;
@property (readonly) NSString *url;
@property (readonly) NSArray *children;
@property (readonly) BOOL isDirectory;

+ (id)initializeWithPersistableValue:(id)a0;
+ (BOOL)isValidPersistableRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 url:(id)a1;
- (id)initWithTitle:(id)a0 children:(id)a1;

@end
