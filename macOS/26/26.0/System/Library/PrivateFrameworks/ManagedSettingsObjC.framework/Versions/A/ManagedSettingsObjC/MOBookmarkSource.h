@class NSString, NSMutableArray;

@interface MOBookmarkSource : NSObject <MOPersistable, NSCopying>

@property (readonly, nonatomic) id persistableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *sourceIdentifier;
@property (readonly) NSString *title;
@property (readonly) NSMutableArray *children;

+ (id)initializeWithPersistableValue:(id)a0;
+ (id)bookmarkSourceArrayFromPersistedArray:(id)a0;
+ (BOOL)isValidPersistableRepresentation:(id)a0;
+ (id)persistableArrayFromBookmarkSourceArray:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceIdentifier:(id)a0 title:(id)a1 children:(id)a2;

@end
