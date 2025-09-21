@class NSArray, NSString;

@interface EWSActiveDirectoryLookup : NSObject

@property (copy, nonatomic) NSArray *discoveredRecords;
@property (readonly, copy, nonatomic) NSString *emailAddress;

+ (void)initialize;

- (BOOL)lookup;
- (id)init;
- (id)initWithEmailAddress:(id)a0;
- (void).cxx_destruct;

@end
