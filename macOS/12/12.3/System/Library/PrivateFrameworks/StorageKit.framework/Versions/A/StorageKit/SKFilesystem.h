@class NSString;

@interface SKFilesystem : NSObject

@property (retain) NSString *localizedName;
@property (retain) NSString *localizedKey;
@property (retain) NSString *type;
@property (retain) NSString *dmPersonality;
@property BOOL isEncrypted;
@property BOOL defaultEffaceable;
@property BOOL isCaseSensitive;
@property BOOL isJournaled;
@property BOOL shouldShow;
@property unsigned long long minimumSize;
@property int sortPriority;

+ (BOOL)_shouldShowFilesystem:(id)a0;
+ (id)_skfilesystemTypeWithPersonality:(id)a0;
+ (id)filesystemsWithDMFilesystem:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dicationaryRepresentation;
- (id)initWithSKFilesystem:(id)a0 localizedName:(id)a1 localizedKey:(id)a2 caseSensitive:(BOOL)a3 encrypted:(BOOL)a4 shouldShow:(BOOL)a5 dmPersonality:(id)a6 minimumSize:(unsigned long long)a7 sortPriority:(int)a8;

@end
