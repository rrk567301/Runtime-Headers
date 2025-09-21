@interface ABLinkPeopleCommand : ABLinkingCommand {
    char ignoresGuardianRestrictions;
}

- (id)actionName;
- (void)setIgnoresGuardianRestrictions:(char)a0;
- (void)changePeople:(id)a0;
- (char)ignoresGuardianRestrictions;
- (id)pickPreferredPersonFromPeople:(id)a0;
- (void)preferSomeoneForProperties:(id)a0;

@end
