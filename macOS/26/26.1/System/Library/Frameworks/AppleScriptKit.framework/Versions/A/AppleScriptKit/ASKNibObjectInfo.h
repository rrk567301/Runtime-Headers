@class NSString, NSMutableArray;

@interface ASKNibObjectInfo : NSObject <NSCoding> {
    long long _ID;
    NSString *_name;
    NSString *_scriptName;
    NSMutableArray *_eventHandlerNames;
    int _scope;
}

+ (void)initialize;

- (void)setScope:(int)a0;
- (void)setID:(long long)a0;
- (long long)ID;
- (int)scope;
- (BOOL)hasInfo;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)name;
- (id)init;
- (id)scriptName;
- (void)addEventHandlerName:(id)a0;
- (id)eventHandlerNames;
- (unsigned long long)indexOfEventHandlerName:(id)a0;
- (void)removeEventHandlerName:(id)a0;
- (void)setEventHandlerNames:(id)a0;
- (void)setScriptName:(id)a0;

@end
