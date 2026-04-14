@class NSArray, NSString;

@interface EWSActiveDirectoryLookup : NSObject

@property (copy, nonatomic) NSArray *discoveredRecords;
@property (readonly, copy, nonatomic) NSString *emailAddress;

+ (void)initialize;

- (BOOL)lookup;
- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)a0;
- (id)init;

@end
