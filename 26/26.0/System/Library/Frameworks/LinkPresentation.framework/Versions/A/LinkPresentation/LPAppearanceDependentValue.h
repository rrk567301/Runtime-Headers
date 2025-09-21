@interface LPAppearanceDependentValue : NSObject {
    id /* block */ _provider;
}

- (id)initWithProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (id)valueForAppearance:(id)a0;

@end
