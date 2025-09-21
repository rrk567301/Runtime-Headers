@class NSString;

@interface _DPToolArguments : NSObject

@property (readonly, copy, nonatomic) NSString *command;
@property (readonly, copy, nonatomic) NSString *arguments;
@property (readonly, copy, nonatomic) NSString *metadata;
@property (readonly, copy, nonatomic) NSString *recordKey;
@property (readonly, nonatomic) char verbose;
@property (readonly, nonatomic) char enforceMetadata;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) char writeOK;

+ (id)usage;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)job;

@end
