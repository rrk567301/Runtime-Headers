@interface LocalAuthenticationEmbeddedUI.LAContextProvider : NSObject <LACContextProviding>

- (id)createContext;
- (id)init;

@end
