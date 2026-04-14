@class NSString, NSMutableArray, NSURL;

@interface CSKFileNode : NSObject

@property (retain, nonatomic) NSMutableArray *mutableChildren;
@property (nonatomic) BOOL isDirectory;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSURL *url;

+ (id)nodeWithName:(id)a0 children:(id)a1;

- (void).cxx_destruct;
- (id)children;
- (void)addChild:(id)a0;

@end
