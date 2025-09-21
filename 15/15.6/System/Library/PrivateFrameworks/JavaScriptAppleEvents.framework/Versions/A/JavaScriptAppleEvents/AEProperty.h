@class NSString;

@interface AEProperty : NSObject

@property (retain) NSString *name;
@property (retain) NSString *displayName;
@property unsigned int code;
@property unsigned int classCode;
@property (retain) NSString *type;
@property char readOnly;
@property char writeOnly;

+ (id)propertyWithName:(id)a0 displayName:(id)a1 type:(id)a2 code:(unsigned int)a3 classCode:(unsigned int)a4 readOnly:(char)a5 writeOnly:(char)a6;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 displayName:(id)a1 type:(id)a2 code:(unsigned int)a3 classCode:(unsigned int)a4 readOnly:(char)a5 writeOnly:(char)a6;

@end
