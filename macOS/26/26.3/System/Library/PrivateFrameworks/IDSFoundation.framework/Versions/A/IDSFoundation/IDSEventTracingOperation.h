@class NSString;

@interface IDSEventTracingOperation : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ uniqueIdentifier;
    void /* unknown type, empty encoding */ fields;
    void /* unknown type, empty encoding */ subOperations;
    void /* unknown type, empty encoding */ stopped;
    void /* unknown type, empty encoding */ start;
    void /* unknown type, empty encoding */ stopTime;
    void /* unknown type, empty encoding */ error;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)addDateSubfieldWithName:(id)a0 value:(id)a1;
- (void)addFlagSubfieldWithName:(id)a0 value:(BOOL)a1;
- (void)addStringSubfieldWithName:(id)a0 value:(id)a1;
- (void)addSubOperationWithOperation:(id)a0;
- (id)fetchSubOperationWithName:(id)a0;
- (id)fetchSubOperationWithUniqueIdentifier:(id)a0;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (void)stopWithError:(id)a0;

@end
