@class NSString;

@interface AEElement : NSObject

@property (retain) NSString *name;
@property (retain) NSString *singularName;
@property (retain) NSString *displayName;
@property unsigned int code;
@property char readOnly;
@property char writeOnly;

+ (id)elementWithName:(id)a0 singularName:(id)a1 displayName:(id)a2 code:(unsigned int)a3 readOnly:(char)a4 writeOnly:(char)a5;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 singularName:(id)a1 displayName:(id)a2 code:(unsigned int)a3 readOnly:(char)a4 writeOnly:(char)a5;

@end
