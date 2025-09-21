@class NSString, NSNumber;

@interface LAContextProvider : NSObject <LACContextProviding> {
    NSNumber *_uidRef;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)createContext;
- (void).cxx_destruct;
- (id)initWithTargetUID:(unsigned int)a0;
- (id)initWithTargetUIDRef:(id)a0;

@end
