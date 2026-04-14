@class NSString, NSMutableArray;

@interface ASKNibObjectInfo : NSObject <NSCoding> {
    long long _ID;
    NSString *_name;
    NSString *_scriptName;
    NSMutableArray *_eventHandlerNames;
    int _scope;
}

+ (void)initialize;

- (void)setID:(long long)a0;
- (BOOL)hasInfo;
- (long long)ID;
- (int)scope;
- (void)setScope:(int)a0;
- (id)init;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)setName:(id)a0;
- (id)scriptName;
- (void)addEventHandlerName:(id)a0;
- (id)eventHandlerNames;
- (unsigned long long)indexOfEventHandlerName:(id)a0;
- (void)removeEventHandlerName:(id)a0;
- (void)setEventHandlerNames:(id)a0;
- (void)setScriptName:(id)a0;

@end
