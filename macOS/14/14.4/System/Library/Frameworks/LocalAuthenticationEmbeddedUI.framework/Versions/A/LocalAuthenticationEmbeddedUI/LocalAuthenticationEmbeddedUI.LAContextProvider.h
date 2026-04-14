@interface LocalAuthenticationEmbeddedUI.LAContextProvider : NSObject <LACContextProviding>

- (id)init;
- (id)createContext;

@end
