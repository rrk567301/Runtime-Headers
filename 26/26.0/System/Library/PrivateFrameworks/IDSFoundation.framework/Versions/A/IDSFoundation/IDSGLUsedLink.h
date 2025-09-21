@class NSString;

@interface IDSGLUsedLink : NSObject

@property unsigned int linkID;
@property (retain) NSString *localIP;
@property (retain) NSString *serverIP;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
